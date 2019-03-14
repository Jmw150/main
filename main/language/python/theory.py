
# theory is three different graphs
# node : { 'b' : [dependencies], 'i' : [isomorphisms], 'f' : [extensions/subtopics] }
theory = { 
           'mathematics' : 
           { 'f' : ['math logic','analysis', 'algebra', 'topology']},
           'theory of computation' : 
           { 'f' : ['formal languages/automatons', 'computational complexity', 'recursion theory']},
           'physics' : 
           { 'b' : ['statistics','math logic'],
             'f' : ['string theory','quantum field theory','relativity','quantum mechanics','mechanics','electromagnetism',
                    'thermodynamics','statistical mechanics','acoustics']},
           'math logic' : 
           { 'f' : ['proof theory', 'model theory', 'recursion theory', 'set theory']},
           'set theory' : 
           { 'f' : ['type theory','zfc']},
           'type theory' :
           { 'f' : ['simply typed lambda calclus','calclus of constructions','homotopy type theory']},
           'formal languages/automatons' : 
           { 'f' : ['propositional calculus','predicate calculus','lambda calculus','turing machine','general recursive functions', 
                    'C','C++','python','scheme','bash','octave','java','javscript','php','prolog','hylang','R','clojure']},
           'relativity' : 
           { 'b' : ['tensor analysis','topology','differential geometry']},
           'quantum mechanics' :
           { 'b' : ['group theory']},
           'string theory' : 
           { 'b' : ['knot theory'], 'f' : ['string field theory']},
           'analysis' : 
           { 'b' : ['algebra','topology'],
             'f' : ['real analysis','complex analysis','functional analysis','hypereal analysis','surreal analysis','tensor analysis'
                    'differential equations','measure theory','numerical analysis','calculus of variations','harmonic analysis']},
           'algebra' : 
           { 'b' : ['math logic'],
             'f' : ['group theory','lie algebra']},
           'topology' : 
           { 'b' : ['math logic'],
             'f' : ['metric spaces']},
           'algrebraic topology' : 
           { 'b' : ['algebra','topology'],
             'f' : ['homotopy theory','knot theory','category theory','homotopy type theory']},
           'artificial intelligence' :
           { 'f' : ['machine learning']},
           'machine learning' :
           { 'f' : ['deep learning']},
           'knot theory' :
           { 'b' : ['algebraic topology']},
           'statistics' :
           { 'b' : ['probability theory']},
           'probability theory' : 
           { 'b' : ['measure theory','analysis','algebra','topology']}
         }

#print (theory['physics'][f])

class describe :
    '''A record for subjects
    
    describe(name, depth[, description])

    depth :
      understand context or motivation for topic 
      understand outline and preface
      understand theorems
      understand proofs
      can solve book problems
      can recreate any of the theorems
      understood topic well enough to make something new in it
    '''

    def __init__ (self, name, depth, **kwargs):
        self.name = name
        self.depth = depth
        if 'note' in kwargs:
            self.note = kwargs['note']
        else :
            self.note = ''

    def Print (self) :
        screen_len = 70
        if (self.note == '') :
            print (str(self.name) +
                   '\n' + screen_len*'-' + '\n' +
                   'confidence: ' + str(self.depth) + '/7\n')
        if (self.note != '') :
            print (str(self.name) +
                   '\n' + screen_len*'-' + '\n' +
                   str(self.note) + '\n' +
                   'confidence: ' + str(self.depth) + '/7\n')


f = 'f'
b = 'b'
i = 'i'

physics = describe('physics',1,note=
'''physics - the study of physical reality
But I will define it as a subset of mathematics. [see math]
For the theory part, the axioms are choosen using statistics off
of data, using null hypothesis testing. The inference rules are also
carefully choosen, using correlation. Confidence for both of these
should be stated, as confidence is personal choice. Industry practice
sugests 5-sigma.''')

math = describe('math',1,note=
'''Math does not have an agreed upon defintion. So the way I have
defined math is the combination of a few parts:

1. formal language
2. theory that exist in the formal language

The advantage of defining mathematics this way is that: it is formal
enough to be independently verifiable by any competent person or
machine, it is general enough to encompass not just traditional math
(ie analysis, algebra) but also much of human experience.
                
formal language := the math logic/cs defintion of a formal language
theory := a set of sentences in a formal langauge called axioms, and
the set of derived sentences, from these axioms, using stated
inference rules''')

real_analysis = describe('real analysis',2,note=
'''I have taken a class and read some of Bartle. I have been meaning
to read tao and rudin too.''')

physics.Print()
math.Print()
real_analysis.Print()



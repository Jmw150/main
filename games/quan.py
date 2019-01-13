from random import randint

# dice rolls
d4  = lambda : randint(1,4)
d6  = lambda : randint(1,6)
d8  = lambda : randint(1,8)
d10 = lambda : randint(1,10)
d12 = lambda : randint(1,12)
d20 = lambda : randint(1,20)


class quan :
    # static stats 
    monk_level = 11
    cleric_level = 1
    level = lvl = monk_level + cleric_level
    stre = [10,0]
    dex  = [20,5]
    con  = [13,1]
    inte = [8,-1]
    wis  = [16,3] #change to 18 when monk_level == 12
    cha  = [10,0]
    inspiration = 0
    
    # underdark specific thing
    # 3 levels total
    madness = 2
    
    # environmental stats
      # do you have advantage on creature?
    advantage = 0
    advantage_range = 0 #?
    
    # mutable stats
    proficiency_bonus = ['', 
                         2,2,2,2, 
                         3,3,3,3, 
                         4,4,4,4, 
                         5,5,5,5, 
                         6,6,6,6][lvl] # based on total level?
    
    martial_arts = ['',
                    4,4,4,4,
                    6,6,6,6,
                    6,6,8,8,
                    8,8,8,8,
                    10,10,10,10][monk_level] # what is this again?
    
    def ki_points (lvl) : 
        if (lvl > 1) : 
            return lvl 
        else : 
            'no ki yet'
    ki_points = ki_points(monk_level)
    
    unarmored_movement = ['', '',
                          10,10,10,10,
                          15,15,15,15,
                          20,20,20,20,
                          25,25,25,25,
                          30,30,30][monk_level]
    
    features = lambda monk_level : ['',
                ['unarmored_defense','martial_arts'],
                ['ki','unarmored_movement'],
                ['monastic_tradition','deflect_missiles'],
                ['ability_score_improvement','slow_fall'],
                ['ki_empowered_strikes',
                 'monastic_tradition_feature'],
                ['evasion','stillness_of_mind'],
                 'ability_score_improvement',
                 'unarmored_movement_improvement',
                 'purity_of_body',
                 'monastic_tradition_feature',
                 'ability_score_improvement',
                 'tongue_of_the_sun_and_moon',
                 'diamond_soul',
                 'timeless_body',
                 'ability_score_improvement',
                 'monastic_tradition_feature',
                 'empty_body',
                 'ability_score_improvement',
                 'perfect_self'][monk_level]
                              
    
    info = {'class' : ['monk', 'cleric'],
            'subclass' : ['sun_soul','light_domain'],
            'level' : monk_level + cleric_level,
            'race' : 'human',
            'full_name' : 'Ju Quan',
            'proficiency_bonus' : proficiency_bonus, # special rule
            'armor_class' : 10+dex[1]+wis[1],
            'initiative' : dex[1],
            'speed' : 30 + unarmored_movement}
            
    
    def max_hp (lvl) : # cleric and monk have same
        ''' '''
        if lvl == 1 :
            return 8 + con[1]
        if lvl > 1 and lvl <= 20 :
            return 2 + lvl * (5 + con[1])
    max_hp = max_hp(lvl)
    
    
    # actions
    def dmg (n) :
        ''' dmg(n) => n hit points of damage to health '''
        if n >= info['max_hp'] * 2 :
              return "died instantly"
        
        # class feature
        info['hp'] -= n - info['arcane_ward_hp']
        
        if n > info['arcane_ward_hp'] :
            info['arcane_ward_hp'] = 0
        else :
            info['arcane_ward_hp'] -= n
    
        if info['hp'] <= 0 :
              return "down"
        else :
              return info['hp']
    
    def dmg_ward (n) :
        if n > info['arcane_ward_hp'] :
            n -= info['arcane_ward_hp']
            info['arcane_ward_hp'] = 0
        else :
            info['arcane_ward_hp'] -= n
            n = 0
        return str(n) + ' dmg left to take'
    
    def heal (n) :
        ''' heal(n) => heal n hit points '''
        if n+info['hp'] > info['max_hp'] :
            info['hp'] = info['max_hp']
        else :
            info['hp'] += n
        return info['hp']
    
    def hit_dice (n=1) :
        ''' hit_dice(n) => use n hit dice '''
        while n > 0 :
            heal(d6())
            n -= 1
        return info['hp']
    
    # def long_rest () :
        
    
    # sword
    def sw (i='') :
        ' sword() => sword attack +11 1d8+7 '
        # used inspiration
        if i == 'i' and inspiration > 0 : 
            att = max(d20(),d20())
            inspiration -= 1
        elif advantage == 1 :
            att = max(d20(),d20())
        else :
            att = d20()
    
        # crit hit
        if att == 20 : 
            dmg = d8() + d8()
        else :
            dmg = d8()
    
        return [ att+11, dmg+7 ] 
    
    def ki (i='') :
        ''' ki() => ki blast +9 1d6+5,  
            ki('i') => inspired ki blast
        '''
        # used inspiration
        if i == 'i' and inspiration > 0 : 
            att = max(d20(),d20())
            inspiration -= 1
        elif advantage_range == 1 :
            att = max(d20(),d20())
        else :
            att = d20()
    
        if att == 20 :
            dmg  = d6() + d6()
        else :
            dmg  = d6()
    
        return [ att+9, dmg+5 ]
    
    def att (n=3) : 
        if n <= 4 and n > 0 :
            return (sw(),sw(),ki(),ki())[0:n]
    
    def range (n=3) : 
        if n <= 4 and n > 0 :
            return (ki(),ki(),ki(),ki())[0:n]
    
    
def interact():
    import code
    code.InteractiveConsole(locals=globals()).interact()
    
#interact()
    

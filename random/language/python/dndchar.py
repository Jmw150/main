#!/usr/bin/python

# this is for a green slaad in dnd
from random import *

#state
spellslot = [0,4,3,3,2]
hp = 40


def pleaf (t) :
    if (type(t) == tuple) : # move this into the tree
      wm = t[0]() 
      m = t[1]()
      boost = t[2]()
      a = ''
      if wm != '' :
        a += '\nWILD MAGIC ' + str(wm)
      a += '\ncast ' + str(m)
      if boost != '' : 
        a += ' with '+ str(boost)
      return a
    elif (type(t) != list) :
      return t
    else :
      rand = randint(0,len(t)-1)
      return pleaf(t[rand])

# context specific random actions

nonCombat = [
'Calls an inanimate object a cunt',
'smiles at random player',
'laughs',
'moves closer to closest player it sees'
]


wildMage = [
#'','','','','','','','','','','','','','','','','','','',
[
'Caster loses (their level)d4 maximum hit points until long rest',
'All of your spell slots are instantly spent for the day',
'half of total party wealth vanishes for 1d4 days',
'Heat Metal is cast upon your metal objects - last for (your level) rounds.',
'You cast Full Polymorph on yourself and turn into a random creature (or your DMs choosing). The spell automatically remains Concentrated for the duration. It cannot be made permanent*',
"If your spell does damage, it will do the minimum. If the original spell has a saving throw, target automatically succeeds. Your spell's duration will be minimum",
"You are transported to the Astral Plane until the end of your next turn, after which time you return to the space you previously occupied or the nearest unoccupied space if that space is occupied.",
"Roll on the table twice (no advantage possible on next roll)",
"Anti-Magic field centered on caster (wastes spell) for 1 round; dispels all magic centered on caster, including own spells",
"You take 2d8 radiant damage and the ally closest to you regains hit points equal to the damage you took.",
"Your spell fails, but the spell slot is not expended (if this applies); if it does not save vs your own DC or become blinded and Deafened lasting until they successfully save at the beginning of each of their turns.",
"Original spell targets caster instead.",
"Everyone in 30 ft hit with Inflict Wounds of the same spell slot level as the intended spell instead*",
"Caster held (as if failing against Hold Person spell), no spell is cast",
"You become allergic to magic items until dispel magic or lesser restore is cast upon you. Every time you have a magic item on you, you itch everywhere and sneeze a lot. (Concentration every time you cast a spell or lose spell.)",
"For the next minute, MUST move their maximum allowable walking distance away from their current possition EACH TURN. If they would hit a wall, they take 1d6 bludgeoning damage and stop. DC 10 Dex save to not fall prone. The path must be as straight as is possible (They cannot move back and forth between two squares).",
"Target's clothes itch (-4 to initiative)",
"You are encumbered. You can only move half of your total speed for 1 minute.",
"You panic and try to flee! You must run away from your target",
"You are enraged! The next time your spell fails or your attack misses during the same encounter, you must take a bonus action to attack the closest target to you.",
"The caster's biological sex is changed",
"You are the target of a Charm Person spell. Failure = charmed by enemy creature.",
"You are the target of Bestow Curse spell.",
"Caster smells like a skunk for spell duration (stinking cloud)",
"You have become mute for the next minute.",
"You feel horribly dizzy; must roll concentrate to cast; roll Dexterity saving throw or fall prone. Lasts 2 rounds.",
"Instead of words, colorful bubbles come out of your mouth when you try to speak for 1 round",
"Your hair falls out (But regrows after the next long rest)",
"roll a d10 your age changes (even increases, odd decreases)",
"Roll a d10 Your height changes by a number of inches equal to the roll (Even you grow, odd you shrink)",
"A bright light flashes. (wisdom save or become blinded for 1d6 turns.)",
"Original spell targets ally of the DM's choosing",
"Spell target changes biological sex.",
"Target must save or become petrified",
"You suffer the same effect as your target",
"You cast Detect Thoughts on the target you chose. If you didn't target a creature, you instead take 1d6 psychic damage",
"For the next minute any flammable object you touch that isn't being worn or carried by a creature catches fire.",
"You instead cast Goodberry",
"Grass grows on the ground in a 60-foot radius centered on the target. If grass is already there, it grows to ten times its normal size and remains overgrown for 1 minute",
"A cloud of 600 oversized butterflies fills a 30-foot-radius centered on the target. The area becomes heavily obscured. The butterflies remain for 10 minutes",
"Heavy rain falls in a 60-foot radius centered on the target. The area becomes lightly obscured. The rain falls until the start of your next turn.",
"An animal appears in the unoccupied space nearest the target at the start of each of their rounds. The animal isnt under your control and acts as it normally would. Roll a d100 to determine which animal appears. On a 01-25, a rhinoceros appears; on a 26-50, an elephant appears; and on a 51-100, a rat appears",
"Your spell turns into a burst of flowers. This does nothing.",
"A burst of colorful shimmering light extends from you in a 30-foot radius. You and each creature in the area that can see must succeed on a DC 15 Constitution saving throw or become blinded for 1 minute. A creature can repeat the saving throw at the end of each of its turns, ending the effect on itself on a success.",
"Hold Person cast on everyone in 60 ft radius",
"You sound off a magical alarm, can be heard clearly for 60 ft., heard faintly another 60 ft.",
"You are immune to being intoxicated for 5d6 days",
"Leaves grow from the target. If you chose a point in space as the target, leaves sprout from the creature nearest to that point. Unless they are picked off, the leaves turn brown and fall off after 24 hours.",
"Caster's limbs are invisible",
"All cloth on target crumbles to dust",
"All doors, windows, chests, and anything locked within 60 ft. of you instantly unlocks",
"Everyone randomly switches places with each other",
"Sparkling motes dance about the caster's head until dawn",
"The caster glows with a bright light (Creatures ending their turn within 5ft of you is blinded until the end of its next turn.",
"You feel energetic and antsy (+4 to initiative)",
"You grow an eye in the middle of your forehead. For the next minute you can see as if with True Seeing, but Charisma skills are disadvantages.",
"You shrink 1 size for 1 minute.",
"A Modron chosen and controlled by the DM appears in an unoccupied space.",
"You grow 1 size for 1 minute.",
"5d20 gold pieces materialize on your person",
"Random item/treasure created on target's person.",
"A stream of 1d4 x 10 gems, each worth 1 gp, shoots from your finger's tip in a line 30 feet long and 5 feet wide. Each gem deals 1 bludgeoning damage, and the total damage of the gems is divided equally among all creatures in the line.",
"You cast Bless on yourself instead (no concentration; lasts 1 minute).",
"You cast Sanctuary on yourself without spending a spell slot (last 1 minute).",
"The next creature to die will automatically be brought back to full hit points and lose all status effects/conditions.",
"Target gains the benefits of Mirror Image.",
"You teleport up to random place up to 60 ft away from your current position.",
"Target becomes prone. If there is not a target, the caster is immediately prone.",
"Target becomes in encumbered for 1 minute. Its movement is cut in half.",
"You create a temporary double of target instead; lasts until next round. Double will follow and mimic same action. (if no target, you are the target).",
"You instead cast Sleep, centered on you.",
"A small black rain cloud forms over the target for 10 minute {Recharge 1,2} a bolt of lightning strikes 2d4 Lightening damage.",
"Target must make a Wisdom save or fall madly in love with the caster. Creatures get a new save every minute.",
"All creatures with 30ft of caster make a Constitution Save or start to hiccup for 1 hour.",
"Each creature with 30 ft of you takes 1d6 necrotic damage. You regain HP equal to the sum of necrotic damage dealt",
"Everyone in 30 ft hit with Cure Wounds spell of the same slot.",
"1d4 local guardsmen emerge from nowhere and fight by your side for up to 5 turns.",
"Caster is transported to the Astral Plane until the end of their next turn, reappearing in the same square or the nearest adjance one.",
"Your AC goes up by 2 for 1 minute, and become immune to Magic Missile.",
"Your maximum HP goes up by 1d10 for 1 minute.",
"Caster regains 5 hit points every turn for 1 minute.",
"You cast True Polymorph on yourself and turn into a creature of your choosing. The spell automatically acts as Concentrated. You keep this form until someone dispels its magic. You gain the form's stats and abilities.",
"You Polymorph randomly at the end of each round for 1 minute.",
"A random creature within 60 feet of you becomes poisoned for d4 hours.",
"You regain your caster level of spell slots.",
"A random creature appears and begins following the target and singing until the end of your next turn.",
"Everyone in 20ft radius of you is Hasted.",
"If you die within the next minute, you immediately come back to life as if by Reincarnate spell.",
"Your spell effect is normal, but the spell slot is not expended (if this applies).",
"Your spell effect is normal. For the next minute your 1 Action spells only require a bonus action to cast.",
"Your spell effect is normal. If the original spell has a saving throw, target automatically fails.",
"Your spell effect is normal. Your spell's duration will be maximum without concentration.",
"Your spell effect is normal. If your spell does damage, it will do the maximum.",
"Your spell effect is normal. Spell effectiveness (range, duration, area of effect, damage, etc.) is doubled.",
"Your spell effect is normal.",
"Your spell goes off as normal, but the spell slot is not expended (if this applies).",
"Spell Effect goes off as normal. If the original spell has a saving throw, target's save is at disadvantage.",
"Spell Effect goes off as normal. If the original spell has a saving throw, target automatically fails.",
"Spell Effect goes off as normal. Your spell's duration will be maximum (does not require concentration).",
"Your spell goes off as normal. If your spell does damage, it will do the maximum. If it does not, the next damage spell you cast does maxium damage.",
"You spell goes off as normal, and you gain 1 Temporary HP for each spell slot level of the spell",
"Arcane Echos: The spell goes off as normal. Then goes again the next round in the same area or against the same targets again and continues this way for a number of turns equal to the spell's slot level.",
"The spell goes off as normal, and a charged item on, or within 30ft of you regains d4 charges, or if not item exists a random mundane item becomes magical (The GM may determine what benefit a +1 Messkit provides (if any)",
"Spell Effect goes off as normal. Spell effectiveness (range, duration, area of effect, damage, etc.) is doubled.",
"Spell Effect goes off as normal. Your spell's duration, damage etc will be maximum without concentration without use of the spell slot.",
"Spell effectiveness (range, duration, area of effect, damage, etc.) increases 200%, spell slot is not used."
]]

# spells[level][spell]
spells = [
[
'Friends',
'Prestidigitation',
'Ray of Frost',
'Shocking Grasp'],
[
'Shield',
'Magic Missle',
'Feather Fall',
'Charm Person'],
(lambda : pleaf(wildMage),
 lambda : pleaf(['Cloud of Daggers', 
                 'Crown of Madness', 
                 'Mirror Image']),
 lambda : pleaf(['','','','subtle spell', 'twinned spell'])),
(lambda : pleaf(wildMage), 
 lambda : pleaf(['Blink', 'Fireball', 'Fly']),
 lambda : pleaf(['','','','subtle spell', 'twinned spell'])),
(lambda : pleaf(wildMage), 
 lambda : pleaf(['Banishment', 'Confusion']),
 lambda : pleaf(['','','','subtle spell', 'twinned spell']))
]

distance = [0,5,10,15,20,25,30]

movement = [
'towards closest player',
'away from enemy',
'in a circle',
'back and forth'
]

no_cost_action = [
'curse at target',
'','',''
]

bonus_action = [
'sorcery points -> spell slot',
'spell slot -> sorcery points',
'','','','',''
]

action = [
spells,
spells,
spells,
'strike random object or creature'
]



def play () :
    print "fighting?"
    ans = raw_input()
    
    # if fighting
    if (ans == 'y' or ans == 'yes' or ans == '') :
      print 'action: ' + str(pleaf(action))
      print 'bonus action: ' + str(pleaf(bonus_action))
      print 'extra action: ' + str(pleaf(no_cost_action))
      print 'move: '+ str(pleaf(distance)) + 'ft ' \
                    + str(pleaf(movement))

    # roleplay stuff
    else :
      rand = randint(0,len(nonCombat)-1)
      print str(pleaf(nonCombat[rand]))

print 'loading lvl 8 wild mage green slaad'
loop = ''
while (loop == '') :
  play()
  loop = raw_input()


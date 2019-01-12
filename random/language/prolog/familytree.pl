

son(jordan,laurenda).
son(jordan,dan).
son(rayden,haven).
daughter(haven,laurenda).
daughter(haven,dan).
daughter(lauren,laurenda).
daughter(lauren,dan).

parent(P,S) :- son(S,P).


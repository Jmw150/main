#!/usr/bin/env perl

# good for beginners
use strict; # perl syntax is not very strict
use warnings; # warn if something bad might happen

use feature 'say'; # author likes this

my $variable = 5; # declaration of a variable 
# 'my' for loacl scope
# '$' for variable type, this one is called scalar
# then declare name, set equal to int 5

print "$variable\n"; # print

# string can be int
my $a = '5';

print $a+2, "\n"; # print statements separated by comma

say 'cheese';

my @arr = (2, 4, 'lolcat');

print $arr[0], "\n", $arr[$#arr], "\n", @arr[1,2], "\n";
 
my %discreteF = (
    1 => 'the loneliest number',
    2 => 'even prime',
    3 => 'last element of this set'
);

my $i = 1;
while ($i <= 3)
{
    print $i, ": ";
    print ($discreteF{$i}, "\n");
    $i += 1;
}


 my $variables = {
         scalar  =>  {
                      description => "single item",
                      sigil => '$',
                     },
         array   =>  {
                      description => "ordered list of items",
                      sigil => '@',
                     },
         hash    =>  {
                      description => "key/value pairs",
                      sigil => '%',
                     },
     };



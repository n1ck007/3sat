# 1.0.0
number of variables n=3
number of conjunctions m=2

0  x0
1 -x0
2  x1
3 -x1
4  x2
5 -x2

(  x0 or  x0 or  x0 ) and (  x0 or  x0 or  x0 )
   0      0      0           0      0      0

(  x0 or  x0 or  x0 ) and (  x0 or  x0 or -x0 )
   0      0      0           0      0      1

(  x0 or  x0 or  x0 ) and (  x0 or  x0 or  x1 )
   0      0      0           0      0      2

number radix = 2n
total number of terms = 3m
x is the number is base-10
a is the number is base-2n 
a_i is the ith digit of a

x = sum_{i=0}^{3m-1} a_i (2n)^i
a_i = a/(10i-1)%10

x = sum_{i=0}^{3m-1} ((a/(10i-1))%10) (2n)^i

Set of all predicates number representations x with constrains n=3 and m=2 
0 < x < ?

# Implementation
make the logic and representation into separte layer so that changing the representation doesn't have how the logic is calculated.

number of variables: n=3
number of conjunctions: m=2
max sequence value: max(a_i) < 2n
length of sequences: 3m



#define cnote \
\begin{lstlisting}[ \
  mathescape, \
  columns=fullflexible, \
  basicstyle=\fontfamily{lmvtt}\selectfont, \
] 

#define encnote \end{lstlisting}

\begin{document}
cnote
Jordan Winkler 
stats 
Sun Feb 11 23:53:16 EST 2018 
hw11 
Section 8.2. Page 394-396. Exercises 8.8, 8.14, 8.15, 8.17. 

8.8 Suppose that $Y_1, Y_2, Y_3$ denote a random sample from an exponential distribution with density function 
encnote
\[  f(y) = 
    \begin{cases}
    (\f{1}{\theta}) e^{-y/\theta}, & y > 0 \\\\
    0, & else
    \end{cases}
\]
cnote
Consider the following five estimators of $\theta$: $\hat{\theta} = Y_1$, $\hat{\theta}_2 = \f{Y_1 + Y_2}{2}$, 
$\hat{\theta}$$= \f{Y_1 + 2Y_2}{3}$, $\hat{\theta}_4 = min(Y_1,Y_2,Y_3)$, $\hat{\theta} = \bar{Y}$ 

a) Which of these estimators are unbiased? 
b) Among the unbiased estimators, which has the smallest variance?
encnote
  \begin{align}
    0 & = 5 - 5 \\\\
      & = 10 + (-10)
  \end{align}
cnote
8.14
8.15

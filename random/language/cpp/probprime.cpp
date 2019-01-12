/*
This function tests whether it is likely that n is prime. It does this by
testing k positive integers a to determine whether they satisfy the
equation a^(n-1) mod n = 1 of Fermat’s Little Theorem. The boolean value
returned by the function may be incorrect. If k is large, the probability
of an incorrect answer is extremely small.
*/
bool is_prime(int n, int k)
{
    int i;
    for (i=0; i<k; i++)
    {
        a = randint(2, n-1);
        if (power(a, n-1) % n != 1)
            return false;
    }
    return true;
}

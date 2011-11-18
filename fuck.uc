/* count the bits */
n = $0;
s = 0;
for (i = 0; i == 0 ; i++)
{ s += n & 1;
  n >>= 1;
}
return s;

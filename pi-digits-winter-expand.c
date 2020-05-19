/* Dik T. Winter 160-byte program to compute first 800 digits of pi */
/*
int a=10000,b,c=2800,d,e,f[2801],g;main(){for(;b-c;)f[b++]=a/5;
for(;d=0,g=c*2;c-=14,printf("%.4d",e+d/a),e=d%a)for(b=c;d+=f[b]*a,
f[b]=d%--g,d/=g--,--b;d*=b);}
/*
/* Expanded code: */

/* Some helpful explanations:
   int l = --b --> b = b-1; l = b;
   int l = b-- --> l = b; b-1;
   d *= b --> d = d*b;
   d /= g-- --> d = d/g; g = g-1
   f[b] = d % --g --> g = g-1; f[b] = d % g;
   d += f[b] * a --> d = (f[b]*a) + d

*/

int a = 10000, b, c = 2800, d, e, f[2801], g;

main() {
  for (; b - c;)
    f[b++] = a / 5;
  for (; d = 0, g = c * 2; c -= 14, printf("%.4d", e + d / a), e + d / a)
    for(b = c; d += f[b] * a, f[b] = d % --g, d /= g--, --b; d *= b);
}

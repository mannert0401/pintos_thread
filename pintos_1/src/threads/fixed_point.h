#define F (1<<14)
#define INT_MAX ((1<<31) -1)
#define INT_MIN (-(1<<31))

/* 17.14 floating point를 계산하는 함수들을 정의해놓은 헤더 파일입니다. */

int int_to_fixed(int n);
int fixed_to_int_round(int x);
int fixed_to_int_zero(int x);
int fixed_add(int x, int y);
int fixed_sub(int x, int y);
int fixed_int_add(int x, int n);
int fixed_int_sub(int x, int n);
int fixed_mul(int x, int y);
int fixed_int_mul(int x, int n);
int fixed_div(int x, int y);
int fixed_int_div(int x, int n);

int int_to_fixed(int n)
{
  return (n * F);
}

int fixed_to_int_round(int x)
{
  if(x >=0)
  return ((x+ F/2)/F);
  else
  return ((x- F/2)/F);
}

int fixed_to_int_zero(int x)
{
  return ((x/F));
}

int fixed_add(int x, int y)
{
  return (x+y);
}

int fixed_sub(int x, int y)
{
  return (x-y);
}
int fixed_int_add(int x, int n)
{
  return (x+n*F);
}
int fixed_int_sub(int x, int n)
{
  return (x-n*F);
}
int fixed_mul(int x, int y)
{
  return ((int64_t)(x)*y/F);
}
int fixed_int_mul(int x, int n)
{
  return (x*n);
}
int fixed_div(int x, int y)
{
  return ((int64_t)(x)*F/y);
}
int fixed_int_div(int x, int n)
{
  return (x/n);
}


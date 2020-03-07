var 
n, a, i, aa, s: int64;
begin
i:=1;
s:=0;
read(n, a);
aa:=a;
if a=1 then 
s:=(n*n-n) div 2 +n
else
begin
while i<=n do
begin
s:=s+aa*i;
aa:=aa*a;
inc(i);
end;
end;
writeln(s);
end.
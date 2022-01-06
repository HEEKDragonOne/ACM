var e,i,j,k,l,m,n,p,q,r,s,t,c:longint;
	pre,other,last:array[0..2000000] of longint;
	pd:boolean;
	
begin
	randomize;
 assign(output,'candy10.in');
 rewrite(output);
	n:=100000;p:=1000000;c:=random(n)+1;m:=random(12345);
	writeln(n,' ',p,' ',c);
	writeln(m);
	while p>0 do
	begin
		l:=random(n)+1;r:=random(n)+1;
		if l<>r then
			begin
				pd:=true;
				k:=last[l];
				while k>0 do
				begin
					if other[k]=r then
					begin
						pd:=false;break;
					end;
					k:=pre[k];
				end;
				if not pd then continue;
				inc(e);
				other[e]:=r;
				pre[e]:=last[l];
				last[l]:=e;
				inc(e);
				other[e]:=l;
				pre[e]:=last[r];
				last[r]:=e;
				writeln(l,' ',r);
				dec(p);
			end;
	end;
 close(output);
end.

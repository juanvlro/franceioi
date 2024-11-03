let x = read_int() in
let y = read_int() in
let z = read_int() in

print_string "Le plus petit est : ";

if x < y then
   begin
   if x < z then
      begin
      print_int x;
      end
   else
      begin
      print_int z;
      end
   ;
   end
else
   begin
   if y < z then
      begin
      print_int y;
      end
   else
      begin
      print_int z;
      end
   ;
   end
;

8,% MATLAB ASSIGNMENT 
 %ALIF OSMAN OTOO
 %3038320

% Question 1a
x = -4:0.1:4;
y = x.^3 - 4*x + sin(x);
plot(x, y)
grid on
hold on

% 1bi
y = x.^2;
plot(x, y)

% Question b i
ans_for_bi = 6*(10/13)+18/(5*7)+5*(9.^2);
fprintf("b) i) %d\n", ans_for_bi);

% Question b ii
ans_for_bii = 6* (35 + 1/4) +14.^0.35;
fprintf("b) ii) %d\n", ans_for_bii);

% Question c

% old cylinder volume
original_radius = 8;
original_height = 15;
original_volume = pi*original_radius.^2*original_height;
fprintf("Volume: %d\n", original_volume);

% calculating new radius
new_volume = original_volume + original_volume*0.2;
new_radius_squared = new_volume / (pi * original_height) ;
new_radius = sqrt(new_radius_squared);
fprintf("New radius when the volume is 20 percent higher: %d\n", new_radius);

% how large the new radius should be?
difference = new_radius - original_radius;
fprintf("Therefore the radius should be %d larger than the original radius\n", difference);

Kompleksitas
------------
1. Pengisian nilai:
	- i = 1					1 kali						
	- i = i + 1
		> best case			0 kali					
		> worst case		n - 1 kali
	- found = false			1 kali					
	- found = true
		> best case 		1 kali					
		> worst case		1 kali			
	- idx = i
		> best case			1 kali						
		> worst case		1 kali	
	- idx = 0
		> best case			0 kali					
		> worst case		0 kali

	T1:
		> best case			4 kali
		> worst case		n + 3 kali

2. Penjumlahan:
	- i = i + 1
		> best case			0 kali					
		> worst case		n - 1 kali

	T2:
		> best case			0 kali
		> worst case		n - 1 kali

3. Perbandingan:
	- numArray[i] == y
		> best case			1 kali					
		> worst case		n kali	
	- found == true
		> best case			1 kali					
		> worst case		1 kali

	T3:
		> best case			2 kali
		> worst case		n + 1 kali

4. Total: 
	- Tmin(n) = 6 kali
	- Tmax(n) = 3n + 3
Kompleksitas
------------
1. Pengisian nilai:
	- i = 2						1 kali
	- maxValue = numArray[0]	1 kali
	- i = i + 1					n - 1 kali
	- maxValue = numArray[i]	
		> best case				0 kali
		> worst case			n kali

	T1:
		> best case = n + 1
		> worst case = 2n + 1

2. Penjumlahan
	- i = i + 1				n - 1 kali

	T2 = n - 1

3. Perbandingan:
	- if (numArray[i] > maxValue) n kali
	
	T3 = n

4. Total : 
	- Tmin(n) = 3n
	- Tmax(n) = 4n
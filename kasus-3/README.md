Kompleksitas
------------
1. Pengisian nilai:
	- i = 1											1 kali
	- j = (sizeof(numArray)/sizeof(*numArray))		1 kali
	- found = false									1 kali
	- mid = (i + j) / 2
		> best case									1 kali
		> worst case
	- found = true
		> best case									1 kali
		> worst case
	- i = mid + 1	
		> best case									0 kali
		> worst case
	- j = mid - 1	
		> best case									0 kali
		> worst case
	- idx = mid	
		> best case									1 kali
		> worst case
	- idx = 0	
		> best case									0 kali
		> worst case
		
2. Penjumlahan:
	- (i + j)
		> best case									1 kali
		> worst case
	- mid + 1
		> best case									0 kali
		> worst case

3. Pengurangan:
	- mid - 1	
		> best case									0 kali
		> worst case

4. Pembagian:
	- (i + j) / 2
		> best case									1 kali
		> worst case								

5. Perbandingan:
	- numArray[mid] == y
		> best case									1 kali
		> worst case	
	- numArray[mid] < y
		> best case									0 kali
		> worst case
	- found == true
		> best case									1 kali
		> worst case

6. Total: 
	- Tmin(n) = 
	- Tmax(n) = 
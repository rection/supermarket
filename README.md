I am doing practise for improve myself on C++. This project purpose, the supermarket take register of the products. The products are seperate with the section. These sections are Games, Books, Toys and Groceries. 

The program using on management office so they can give input the system. The records holds in PostgreSQL. I used libpqxx library for PostgreSQL connection. 


## Installation:

The first necessary PostgreSQL-11 and libpqxx library for PostgreSQL connection so you need to be apply this code in Debian systems:

```
sudo apt install libpqxx-6.2 libpqxx-dev
```

This packages in this repository *http://deb.debian.org/debian buster/main amd64.*

Compile the program:


```
g++ g++ main.cpp -std=c++2a -lpqxx -lpq
```


## Table Structure in PostgreSQL

	          
			   /-------> Groceries      /------------\
			  /                        /  ProductName \
	         /-------> Games ----------   BrandName
Market -----/                          \  ProductYear /
            \                           \------------/
			 \-------> Books
			  \
			   \--------> Toys

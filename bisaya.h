/*
Header Name: bisaya.h
Author: Jeremiah T. Ramos
Description:
    Include this header file with your code to enable Bisaya syntax in your C code.
    Bisaya translations may be inaccurate. Please refer to definitions below for
    syntax usage. This header was created for the programmers out there who not only
    enjoy tortuing themselves with C, but also by coding in Bisaya.
Date: September 20, 2023
Current Version: 1.1-alpha "YawaScript"
Changelog:
    1.1-alpha "Yawa Update" - First release - 9/20/23
    1.2-alpha "YawaScript" - Added changes - 9/22/23
        - added 'saka' and 'naog' as ++ and --, respectively.
        - added 'tandi()' as strcmp().
        - added 'ipadaka()' and 'ipagamya' as toupper() and tolower().
*/

// Data Types
#define piso int
#define centavo float
#define simbolo char
#define tuoran bool // requires stdbool.h
#define wala void

// Pre-defined Functions
#define nag_una main
#define pag_ingnon printf
#define ingnon printf // Shortcut for pag_ingnon
#define pag_basa scanf
#define basa scanf // Shortcut for pag_basa
#define adunay strstr // requires string.h
#define aduna strchr // requires string.h
#define maghiusa strcat // requires string.h
#define kopyaha strcpy // requires string.h
#define tandi strcmp // requires string.h
#define gitas_on strlen // requires string.h
#define gidak_on sizeof
#define ipadaka toupper // requires <ctype.h>
#define ipagamya tolower // requires <ctype.h>
#define paghatag malloc // requires stdlib.h
#define kinuha free // requires stdlib.h
#define paghulat sleep

// Conditonals
#define kung if
#define kun_dili else
#define kun_dili_ else if
#define itandi switch
#define kaso case
#define kasagaran default

// Loops
#define samtang while
#define buhata do
#define para for

// Booleans
#define dili !
#define tinuod true // false would read as 'dili tinuod'
#define og &&
#define ug &&
#define o ||

// Comparisons
#define parehas ==
#define lahi !=
#define masdaku >
#define masgamay <
#define kutob <= // Assuming an increasing counter in for loops
#define gikan >= // Assuming an increasing counter in for loops
#define _kutob >= // Assuming a decreasing counter in for loops
#define _gikan <= // Assuming a decreasing counter in for loops

// Operators
#define saka ++
#define naog --

// Keywords
#define pagbalik return
#define padayon continue
#define buwag break
#define katapusan const
#define pagsugod static

# include < stdio.h >
# include < unistd .h >

int main ( void ) {
int pid = fork () ;
    if ( pid ==0)
        printf ( " [ H ] ppid = %5d , pid = %5d \ n " , getppid () , getpid () ) ;
    else
        printf ( " [ P ] ppid = %5d , pid = %5d , H = %5d \ n " , getppid () , getpid () , pid ) ;
        int status;
        wait (& status ) ;

        printf ( "[ P ] el proceso pid = PID acaba de terminar con esado STATUS \ n " ,pid , status ) ;
    
        return 0;
}

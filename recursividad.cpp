# incluye  < iostream >
# include  < string.h >
# include  < stdio.h >
utilizando  namespace  std ;
 Permutaciones de nulos ( int n, string *, int l = 0 );
int  main () {
    string * palabra = NULL ;
    int t;
    cout << " Cantidad de elementos ---> " ;
    cin >> t;
    cout << " Ingresa los " << t << " Elementos " << endl;
    palabra = nueva cadena [t];
    getline (cin, palabra [ 0 ]);
    para ( int i = 0 ; i <t; i ++)
    {
            cout << " Elemento " << i + 1 << " ---> " ;
            getline (cin, palabra [i]);
    }
    Permutaciones (t, palabra);
    cin obtener ();
    devuelve  0 ;
}
 Permutaciones nulas ( int n, string * cad, int l)
{
     cuerda c;          
     int i, j;          
     para (i = 0 ; i <nl; i ++)
     {
              if (nl> 2 ) Permutaciones (n, cad, l + 1 );
              más
              {
                  cout << " Cambio: " ;
                  para ( int k = 0 ; k <n; k ++)
                  {
                          cout << cad [k] << " , " ;
                  }
              }
        
              c = cad [l];
              cad [l] = cad [l + i + 1 ];
              cad [l + i + 1 ] = c;
              si (l + i == n- 1 )
              {
                          para (j = l; j <n; j ++) cad [j] = cad [j + 1 ];
              }
     }
}

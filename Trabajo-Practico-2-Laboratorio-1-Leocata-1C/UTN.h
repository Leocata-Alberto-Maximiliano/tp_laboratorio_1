// FUNCIONES DE VALIDACION

/**
 * \brief Solicita una cadena de caracteres al usuario y la valida
 * \param input Se carga el string ingresado
 * \param message Es el mensaje a ser mostrado
 * \param eMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Longitud m�nima de la cadena
 * \param hiLimit Longitud m�xima de la cadena
 * \return Si obtuvo la cadena [0] si no [-1]
 *
 */
int getString(char*, char[], char[], int, int);

/** \brief SOLICITA UN CARACTER AL USUARIO VALIDANDO UN RANGO DETERMINADO
 *
 * \param char[]
 * \param char[]
 * \param char
 * \param char
 * \return char
 *
 */
char getChar(char[], char[], char, char);

/** \brief SOLICITA UN NUMERO ENTERO AL USUARIO VALIDANDO UN RANGO DETERMINADO
 *
 * \param char[]
 * \param char[]
 * \param int
 * \param int
 * \return int
 *
 */
int getInt(char[], char[], int, int);

/** \brief SOLICITA UN NUMERO DECIMAL AL USUARIO VALIDANDO UN RANGO DETERMINADO
 *
 * \param char[]
 * \param char[]
 * \param float
 * \param float
 * \return float
 *
 */
float getFloat(char[], char[], float, float);

/** \brief INDICA SI UNA CADENA ES UN NUMERO. DEVUELVE "1" PARA VERDADERO, "0" PARA FALSO.
 *
 * \param char[]
 * \return int
 *
 */
int isNumber(char[]);

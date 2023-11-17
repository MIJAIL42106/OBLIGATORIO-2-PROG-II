
/*
- consultorio odontologico
- necesita programa para
    - manipular informacion de sus pacientes
        + datos de las consultas al dentista
- cantidad de pacientes
    - elevada
    - no hay cota
- identificacion de paciente
    - cedula
- datos de interes de pacientes
    - nombre
    - apellido
    - telefono
    - cantidad de consultas
        - hasta el momento en el consultorio
        - inicia en 0
            - cuando paciente es registrado
        - incrementa al realizar consulta
- orden de pacientes en programa
    - por cedula
    - ingresos
        - en cualquier orden
    - al ingresar queda ordenado
        - de menor a mayor          // ABB
- al realizar cosulta
    - se registran datos
        - fecha de consulta
        - breve descripcion
        - cedula
        - evaluacion resultante     // enum
            - EN TRATAMIENTO
            - NECESITA PROTESIS
            - SALUDABLE
    - se almacenan datos
        - orden cronologico inverso
            - primero mas recientes
            - luego mas antiguas
        - cantidad
            - no hay cota
        - no puede haber
            - consulta para 2 pacientes
            - fecha menor a ultima ingresada
        - puede haber
            - existir paciente sin consulta
            - varias consultas en misma fecha

- requerimientos    // debe resolver
- altas y bajas
    - registrar datos de nuevo paciente
        - verificar - cedula no repetida
    - registrar nueva consulta 
        - verificar - cedula existe en sistema
                    - fecha valida y >=anterior
                        - >= ultima consulta
    - eliminar paciente de sistema 
        - dada su cedula
        - verificar - cedula existe en sistema
        + tambien
            - eliminar consultas del paciente
- listados
    - listar pacientes - todos
        - ordenados por cedula
            - menor a mayor
        - datos por paciente
            - cedula
            - nombre
            - apellido
            - telefono
            - cantidad de consultas
        + todos los datos en una linea
    - listar pacientes - sin consultas
        ** duda ** - ordenados?
        - datos por paciente
            - cedula
            - nombre
            - apellido
            - telefono
            - cantidad de consultas
        + todos los datos en una linea
    - listar consultas - de un paciente
        - dada una cedula
            - listar todas sus consultas
        - ordenadas
            - cronologico inverso
        - datos por consulta
            - fecha
            - descripcion
            - cedula
            - evaluacion
        + todos los datos en una linea
        - verificar - cedula existe 
    - listar consultas - desde una fecha
        - dada una fecha
            - listar consultas con
                - fecha igual o posterior
        - ordenadas
            - cronologico inverso
        - datos por consulta
            - fecha
            - descripcion
            - cedula
            - evaluacion
        + todos los datos en una linea
        - verificar - fecha valida
- consultas
    - buenas noches
- 
*/
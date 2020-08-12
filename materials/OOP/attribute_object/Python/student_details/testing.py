import student_details_object as student_object

student_number_one = student_object.student_details('Cigan Oliviu-David', 19, 'Technical University of Cluj-Napoca')
query = student_object.student_data_query
manipulator = student_object.student_data_manipulation

query.show_student_data(query, student_number_one)

manipulator.change_student_name(manipulator, student_number_one, 'Nilvan Cristina')
manipulator.change_student_age(manipulator, student_number_one, 18)
manipulator.change_student_university(manipulator, student_number_one, 'Technical University of Cluj Napoca')


query.show_student_data(manipulator, student_number_one)

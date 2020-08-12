import student_details_object as student_object

oli = student_object.student_details('Cigan Oliviu-David', 19, 'Technical University of Cluj Napoca')
query = student_object.student_data_query
manipulator = student_object.student_data_manipulation

query.show_student_data(query, oli)

manipulator.change_student_name(manipulator, oli, 'Nilvan Cristina')
manipulator.change_student_age(manipulator, oli, 18)
manipulator.change_student_university(manipulator, oli, 'Technical University of Cluj Napoca')


query.show_student_data(manipulator, oli)

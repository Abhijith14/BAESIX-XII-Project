# BAESIX

**1. INTRODUCTION**

	1.1 About the Project

		1.1.1 BAESIX-An Overview

			Basic Algorithmic file Encoded as a Simple program Intended to Entertain you eXtendly”-
			shortened as BAESIX:- is a software that facilitate the creation and sharing of 
			information, ideas, career interests and other forms of expression using the basic 
			programming language C++. In simple words it’s a basic model of Social media
			management software (SMMS) - an application program or software suite module that
			facilitates an organization's ability to successfully engage in social media across
			different communication channels.

			When engaging with these services, users can create highly interactive platforms through
			which individuals, communities, and organizations can share, co-create, discuss, and modify
			user-generated content or pre-made content posted online. They "introduce substantial and
			pervasive changes to communication between organizations, communities, and individuals."
			BAESIX mainly focus on the emerging fields of technoself studies, But still in a basic
			form. BAESIX differ from other social media software as it posts only ideas and suggestions
			across different users and does not support networking.
			
			Social media intelligence enables brands to:
			
			•	Heighten brand awareness
			•	Increase social community size
			•	Accurately target audiences
			•	Strengthen engagement strategies for increased brand loyalty
			•	Increase customer satisfaction and positive brand perception
			•	Convert social followers into qualified leads and new business
			
			Modern SMMS’s generally have many more features as posting a video or an image or even
			playing multiplayer online games and more. The feature set differs between different
			applications or websites; however, this project deals with simple and basic features
			including text messaging and chatting and sharing ideas or suggestions.

		1.1.2 Objective of the PROJECT

				The main objective of the project “BAESIX” is to help the user to share their ideas
				or suggestions among their follower.
				It helps the user to also to chat with their friends.
				Thus we get the trust of each user by our way to be S.M.A.R.T.
				(Specific, Measureable, Achievable, Realistic, and Timely).


**2. SYSTEM SPECIFICATION**

	2.1 Development Environment

		2.1.1 Hardware Configuration

			PROCESSOR : Intel Core i7-5960X
			RAM : HyperX Predator 3600 2X8GB
			GRAPHICS ADAPTER : Nvidia GeForce GTX Titan Xp
			MONITOR : AOC Agon AG352UCG
			KEYBOARD : Logitech G910 Orion Spectrum
			MOUSE : Logitech G903

		2.1.2 Software Configuration

			OPERATING SYSTEM : Windows 10
			EDITOR : DOSBox
			PROGRAMMING LANGUAGE : C++
			OOP CONCEPTS USED : Data Abstraction, Data Encapsulation, Modularity, Inheritance, 
			                    Polymorphism, Reusability.
			FEATURES USED : Files, Class, Functions
			DATABASE : SQL

**3. DATA FLOW DIGRAM**

![alt text](https://github.com/Abhijith14/BAESIX-XII-Project/blob/master/images/flowchart.jpg?raw=true)



| SL.No. | Classes Used | Function       |  | Description                                                   |  | Files Used   |
|--------|--------------|----------------|--|---------------------------------------------------------------|--|--------------|
| 1      | Intr_o       | intro()        |  | Functions to display Welcome screen.                          |  | -            |
|        |              | graphicintro() |  |                                                               |  |              |
|        |              | cpyrgt()       |  | Functions to display the terms and conditions.                |  |              |
|        |              | license()      |  |                                                               |  |              |
|        |              | acknow()       |  | Function to display acknowledgement.                          |  |              |
| 2      | Outlin_e     | ask()          |  | Function to enter choice for Signup/Login.                    |  | -            |
|        |              | show1()        |  | Function to display license of the  software.                 |  |              |
| 3      | Use_r        | modify()       |  | Function to modify details of an account.                     |  | -            |
|        |              | ret_city()     |  | Function to return the city.                                  |  | -            |
|        |              | ret_state()    |  | Function to return the state.                                 |  | -            |
|        |              | ret_country()  |  | Function to return the country.                               |  | -            |
|        |              | ret_hometown() |  | Function to return the hometown.                              |  | -            |
|        |              | ret_user()     |  | Function to return the unique user ID.                        |  | -            |
|        |              | ret_pass()     |  | Function to return the unique pass code.                      |  | -            |
|        |              | ret_name()     |  | Function to return the name.                                  |  | -            |
|        |              | ret_rel()      |  | Function to return the relationship status.                   |  | -            |
|        |              | ret_phone()    |  | Function to return the phone number.                          |  | -            |
|        |              | newdat()       |  | Function to enter the details of an account.                  |  | -            |
|        |              | d_lay()        |  | Function to display delay message.                            |  | -            |
|        |              | e_ror()        |  | Function to display error message.                            |  | -            |
|        |              | D_el()         |  | Function to display deleting message.                         |  | -            |
|        |              | wai_t()        |  | Function to display loading message.                          |  | -            |
|        |              | inbox()        |  | Function to display sending message.                          |  | -            |
| 4      | Idea_share   | idea_share     |  | Constructor to initialise value of story to “NULL”.           |  | -            |
|        |              | Enter()        |  | Function to enter the idea to be shared.                      |  | IDEA         |
|        |              | Show()         |  | Function to return the current story.                         |  | -            |
|        |              | ret_date()     |  | Function to return the date.                                  |  |              |
|        |              | ret_type()     |  | Function to return the from.                                  |  |              |
| 5      | Hoo_k        | work()         |  | Function to diplay home page.                                 |  | CREATE, COMPOSE,IDEA  |
|        |              | logout()       |  | Function to logout from the current account.                  |  | -            |
|        |              | oldloc()       |  | Function to modify location.                                  |  | CREATE       |
| 6      | C_msg        | C_msg          |  | Constructor to initialize the values of nomb=0 and check=’N’. |  | -            |
|        |              | message()      |  | Function to compose a message.                                |  | COMPOSE      |
|        |              | clearnotify()  |  | Function to clear notifications.                              |  |              |
|        |              | notify me()    |  | Function to display notifications.                            |  |              |
|        |              | ret_check()    |  | Functon to return check.                                      |  | -            |
|        |              | ret_to()       |  | Function to return to.                                        |  |              |


**4. CONCLUTION**

	“Basic Algorithmic file Encoded as a Simple program Intending to entertain you Xtendly” shortened as BAESIX is a basic form of what now we call a “SOCIAL MEDIA”. In this modern era everyone is very into social media. It has became a part of our life. Social media is defined as relationship that exist between network and people. Thus via this software, we provide the facilities for users to share and connect with one another. BAESIX thus becomes the best by our way to be S.M.A.R.T. (Specific, Measureable, Achievable, Realistic, and Timely).

	This project helps users to create highly interactive platforms through which individuals, communities, and organizations can share, co-create, discuss, and modify user-generated content or pre-made content posted. They "introduce substantial and pervasive changes to communication between organizations, communities, and individuals." BAESIX mainly focus on the emerging fields of technoself studies, But still in a basic form. BAESIX differ from other social media software as it posts only ideas and suggestions across different users and does not support networking.

	However this project is not safe. Many softwares has now the facility to create fake Id’s which will not be identified and can thus access others privacy without their knowledge. Moreover they can hack your informations and also alter it. Our codewriter team are trying our best to prevent such efforts. Currently this project is just a prototype.There are many modifications to be made in this project to make it safe. These modifications would be made in this project gradually. There are many more modifications to be made so as to this project becomes more user friendly.
	 
		project to do all work ease and fast.

**5. BIBLIOGRAPHY**

	5.1 Textbooks:

		1. Computer Science with C++ A textbook for class XI by Sumita Arora
		2. Computer Science with C++ A textbook for class XII by Sumita Arora

	5.2 Websites:

		1.	http://www.studytonight.com/
		2.	http://www.cplusplus.com/




**6. Output Screen Layouts**

![alt text](https://github.com/Abhijith14/XI-Project-Calc/blob/master/images/1.png?raw=true)
![alt text](https://github.com/Abhijith14/XI-Project-Calc/blob/master/images/2.png?raw=true)
![alt text](https://github.com/Abhijith14/XI-Project-Calc/blob/master/images/3.png?raw=true)
![alt text](https://github.com/Abhijith14/XI-Project-Calc/blob/master/images/4.png?raw=true)
![alt text](https://github.com/Abhijith14/XI-Project-Calc/blob/master/images/5.png?raw=true)
pipeline{
    agent any
    
    stages{
        stage('Checkout'){
            steps{
                git 'https://github.com/SwordJoe/hello-test.git'
            }
        }

        stage('Build'){
            steps{
                sh 'g++ main.cc -o hello'
            }
        }

        stage('Test'){
            steps{
                sh './hello'
            }
        }
    }
}
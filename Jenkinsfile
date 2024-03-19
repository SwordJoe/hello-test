pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                // 在这里添加你的构建命令
                echo 'Building..'
                sh 'g++ main.cc -o hello'
            }
        }

        stage('Test') {
            steps {
                // 添加测试命令
                echo 'Testing..'
            }
        }

        stage('Deploy') {
            steps {
                // 添加部署命令
                echo 'Deploying..'
                sh './hello'
            }
        }
    }
}

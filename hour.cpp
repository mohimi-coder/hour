/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hour.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohimi <mohimi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:42:10 by mohimi            #+#    #+#             */
/*   Updated: 2025/01/27 16:13:43 by mohimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <thread>
#include <chrono>


#define color "\001\033[1;36m\002"
#define pos "\001\033[0;0m\002"
#define yellow "\001\033[1;33m\002"
#define grey "\001\033[1;30m\002"
#define lg "\001\033[92m\002"
#define b_italic "\001\033[1;3m\002"
#define gold "\001\033[38;5;220m\002" 
#define dark_blue "\001\033[34m\002"
#define teal "\001\033[38;5;30m\002"
#define violet "\001\033[38;5;128m\002"
#define b_ora "\001\033[1;38;5;208m\002"


using namespace std;

int main()
{
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    cout << gold "Hours: " pos;
    cin >> hours;

    cout << grey "Minutes: " pos;
    cin >> minutes;

    cout << violet "Seconds: " pos;
    cin >> seconds;

    while(1)
    {
        system("clear");
        if (seconds > 59)
        {
            minutes++;
            seconds = 0;
        }
        if (minutes > 59)
        {
            hours++;
            minutes = 0;
        }
        if (hours > 23)
        {
            hours = 0;
        }
        cout << gold << hours << pos << ":" << grey << minutes << pos << ":" << violet << seconds << pos << endl;
        seconds++;
        std::this_thread::sleep_for(std::chrono::milliseconds(900));
    }
}
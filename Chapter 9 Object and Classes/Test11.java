// 9.26 c

package application;

import java.util.Date;

public class Test11 {
	public static void main(String[] args) {
		Date date = new Date(1234567); // Initialize a Date object with a specific time

		m1(date); // Pass the reference to the method

		// Print the time of the original Date object
		System.out.println(date.getTime()); // Output: 1234567
	}

	public static void m1(Date date) {
		// Reassign the local reference to null
		date = null;
	}
}
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calendar
{
    public partial class MainForm : Form
    {
        public MainForm()
        {
            InitializeComponent();
        }

        private CalendarGenerator cg;
        private RichTextBox[] monthsTextBoxes;


        private void MainForm_Load(object sender, EventArgs e)
        {
            monthsTextBoxes = new RichTextBox[12] { janTextBox, febTextBox, marchTextBox, aprilTextBox, mayTextBox, juneTextBox, 
                                                    julyTextBox, augTextBox, septTextBox, octTextBox, novTextBox, decTextBox };

            cg = new CalendarGenerator();
        }

        private void generateButton_Click(object sender, EventArgs e)
        {
            String givenYear = yearTextBox.Text;

            yearLabel.Text = givenYear;

            String[] monthsDatesString = cg.generateCalendarString(int.Parse(givenYear));

            VisualizeDates(monthsDatesString);

            yearPanel.BringToFront();
            yearPanel.Visible = true;
        }

        private void VisualizeDates(String[] monthsDatesString) {
            for (int m = 0; m < 12; ++m) {
                monthsTextBoxes[m].Text = monthsDatesString[m];
            }
        }

        private void yearTextBox_TextChanged(object sender, EventArgs e)
        {
            if (yearTextBox.Text != ""){
                generateButton.Enabled = true;
            } else {
                generateButton.Enabled = false;
            }
        }

    }
}

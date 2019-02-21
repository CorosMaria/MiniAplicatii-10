using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Modulatie
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        System.Drawing.Graphics Desen;
        System.Drawing.Pen Creion;

        private void Form1_Load(object sender, EventArgs e)
        {
        Desen = this.CreateGraphics();
		Creion=new System.Drawing.Pen(System.Drawing.Color.Red);
        }

        private void Form1_Paint(object sender, PaintEventArgs e)
        {
        sin_mod();
        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
        sin_mod();
        }

        private void numericUpDown2_ValueChanged(object sender, EventArgs e)
        {
            sin_mod();
        }
        void sin_mod()
        {
            int i = 0, y = 0, y_v = 0, lat, factor_s;
            double x, rad, xm, f;
            Desen.Clear(this.BackColor);
            factor_s = this.Height / 2 - 37;
            rad = System.Convert.ToDouble(this.numericUpDown1.Value);
            f = System.Convert.ToDouble(this.numericUpDown2.Value);
            lat = this.Width;
            do
            {
                x = i * rad * System.Math.PI / (lat - 10);
                xm = f * x;
                y = System.Convert.ToInt16(35 + factor_s * (1 - Math.Sin(xm) * Math.Sin(x)));
                Desen.DrawLine(Creion, i - 1, y_v, i, y);
                y_v = y;
                i += 1;
            }
            while (i <= lat);
        }

        private void Form1_Resize(object sender, EventArgs e)
        {
            sin_mod();
        }
    }

    }
    
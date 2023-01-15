using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using WpfApp1.ViewModels;

namespace WpfApp1
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            try
            {
                this.DataContext = new MainWindowViewModel();
            }
            catch (Exception e)
            {
                this.Background = Brushes.DarkRed;//error loading native dll

            }
            // this.DataContext = App.Current.Services.GetService<MainWindowViewModel>();
        }

        public MainWindowViewModel ViewModel => (MainWindowViewModel)DataContext;
    }
}

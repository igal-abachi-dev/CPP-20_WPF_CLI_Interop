using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using CommunityToolkit.Mvvm;
using CommunityToolkit.Mvvm.ComponentModel;
using CommunityToolkit.Mvvm.Input;


namespace WpfApp1.ViewModels
{
    public partial class MainWindowViewModel : ObservableObject
    {
        private readonly NativeWrappers.MainWindowLogic _logic = new();

        [ObservableProperty]
        private bool _clicked;


        [RelayCommand]
        private void  OnClick()
        {
            Clicked = true;

            //update c++/cli logic:
            int total = _logic.AddClicks();
            Debug.WriteLine("Clicks: " + total);
        }

        //partial void OnClickedChanged(bool value)
        //{
        //}
    }
}

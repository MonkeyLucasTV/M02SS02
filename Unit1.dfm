object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Projet de beau gosse'
  ClientHeight = 590
  ClientWidth = 581
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 112
    Top = 496
    Width = 107
    Height = 13
    Caption = 'Adresse IP du serveur'
  end
  object TLabel
    Left = 136
    Top = 375
    Width = 3
    Height = 13
  end
  object Label3: TLabel
    Left = 179
    Top = 375
    Width = 3
    Height = 13
  end
  object Label4: TLabel
    Left = 219
    Top = 375
    Width = 3
    Height = 13
  end
  object Label5: TLabel
    Left = 257
    Top = 375
    Width = 3
    Height = 13
  end
  object Label6: TLabel
    Left = 294
    Top = 375
    Width = 3
    Height = 13
  end
  object Label7: TLabel
    Left = 340
    Top = 375
    Width = 3
    Height = 13
  end
  object Label8: TLabel
    Left = 377
    Top = 384
    Width = 3
    Height = 13
  end
  object Label9: TLabel
    Left = 419
    Top = 375
    Width = 3
    Height = 13
  end
  object Label10: TLabel
    Left = 456
    Top = 375
    Width = 3
    Height = 13
  end
  object TLabel
    Left = 99
    Top = 375
    Width = 3
    Height = 13
  end
  object Button1: TButton
    Left = 48
    Top = 48
    Width = 113
    Height = 41
    Caption = 'FullOn'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 224
    Top = 48
    Width = 113
    Height = 41
    Caption = 'FullOff'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 416
    Top = 48
    Width = 113
    Height = 41
    Caption = 'D'#233'mo'
    TabOrder = 2
    OnClick = Button3Click
  end
  object ScrollBar1: TScrollBar
    Left = 97
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 3
    OnChange = ScrollBar1Change
  end
  object ScrollBar2: TScrollBar
    Left = 136
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 4
    OnChange = ScrollBar2Change
  end
  object ScrollBar3: TScrollBar
    Left = 176
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 5
    OnChange = ScrollBar3Change
  end
  object ScrollBar4: TScrollBar
    Left = 216
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 6
    OnChange = ScrollBar4Change
  end
  object ScrollBar5: TScrollBar
    Left = 256
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 7
    OnChange = ScrollBar5Change
  end
  object ScrollBar6: TScrollBar
    Left = 294
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 8
    OnChange = ScrollBar6Change
  end
  object ScrollBar7: TScrollBar
    Left = 336
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 9
    OnChange = ScrollBar7Change
  end
  object ScrollBar8: TScrollBar
    Left = 377
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 10
    OnChange = ScrollBar8Change
  end
  object ScrollBar9: TScrollBar
    Left = 416
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 11
    OnChange = ScrollBar9Change
  end
  object ScrollBar10: TScrollBar
    Left = 456
    Top = 192
    Width = 17
    Height = 177
    Kind = sbVertical
    Max = 255
    PageSize = 0
    TabOrder = 12
    OnChange = ScrollBar10Change
  end
  object Button4: TButton
    Left = 48
    Top = 416
    Width = 465
    Height = 25
    Caption = 'Envoyer'
    TabOrder = 13
    OnClick = Button4Click
  end
  object Edit1: TEdit
    Left = 312
    Top = 493
    Width = 121
    Height = 21
    TabOrder = 14
    Text = '172.20.21.17'
  end
  object CheckBox1: TCheckBox
    Left = 224
    Top = 128
    Width = 129
    Height = 17
    Caption = 'Envoi automatique'
    TabOrder = 15
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 536
    Top = 8
  end
end

object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1041#1040#1047#1040' '#1044#1040#1053#1053#1067#1061
  ClientHeight = 911
  ClientWidth = 1317
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object EditFIO: TEdit
    Left = 8
    Top = 30
    Width = 425
    Height = 57
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TextHint = #1060#1048#1054
  end
  object EditDepartment: TEdit
    Left = 464
    Top = 30
    Width = 161
    Height = 57
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    NumbersOnly = True
    ParentFont = False
    TabOrder = 1
    TextHint = #1053#1054#1052#1045#1056' '#1054#1058#1044#1045#1051#1040
  end
  object EditPosition: TEdit
    Left = 656
    Top = 30
    Width = 369
    Height = 57
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    TextHint = #1044#1054#1051#1046#1053#1054#1057#1058#1068
  end
  object DatePicker: TDateTimePicker
    Left = 1056
    Top = 30
    Width = 233
    Height = 57
    Date = 46067.000000000000000000
    Time = 0.719140081018849700
    TabOrder = 3
  end
  object BtnAdd: TButton
    Left = 8
    Top = 104
    Width = 1281
    Height = 65
    Caption = #1044#1054#1041#1040#1042#1048#1058#1068' '#1057#1054#1058#1056#1059#1044#1053#1048#1050#1040' '#10010
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = BtnAddClick
  end
  object EditSearchFIO: TEdit
    Left = 8
    Top = 216
    Width = 425
    Height = 65
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    TextHint = #1055#1086#1080#1089#1082' '#1087#1086' '#1092#1072#1084#1080#1083#1080#1080
  end
  object BtnFind: TButton
    Left = 8
    Top = 301
    Width = 425
    Height = 73
    Caption = #1053#1072#1081#1090#1080
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnClick = BtnFindClick
  end
  object EditSearchDepartment: TEdit
    Left = 456
    Top = 216
    Width = 169
    Height = 65
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    NumbersOnly = True
    ParentFont = False
    TabOrder = 7
    TextHint = #1055#1086' '#1086#1090#1076#1077#1083#1091
  end
  object BtnDepartment: TButton
    Left = 456
    Top = 301
    Width = 169
    Height = 73
    Caption = #1055#1086#1080#1089#1082
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 8
    OnClick = BtnDepartmentClick
  end
  object EditExperience: TEdit
    Left = 656
    Top = 216
    Width = 369
    Height = 65
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    NumbersOnly = True
    ParentFont = False
    TabOrder = 9
    TextHint = #1055#1086' '#1089#1090#1072#1078#1091
  end
  object BtnExperience: TButton
    Left = 656
    Top = 301
    Width = 369
    Height = 73
    Caption = #1055#1086#1082#1072#1079#1072#1090#1100
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 10
    OnClick = BtnExperienceClick
  end
  object EditDeleteFIO: TEdit
    Left = 1056
    Top = 216
    Width = 233
    Height = 65
    AutoSize = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    TextHint = #1059#1076#1072#1083#1080#1090#1100' '#1089#1086#1090#1088#1091#1076#1085#1080#1082#1072
  end
  object BtnDelete: TButton
    Left = 1056
    Top = 301
    Width = 233
    Height = 73
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 12
    OnClick = BtnDeleteClick
  end
  object BtnShowAll: TButton
    Left = 8
    Top = 440
    Width = 425
    Height = 81
    Caption = #1055#1054#1050#1040#1047#1040#1058#1068' '#1042#1057#1045#1061
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 13
    OnClick = BtnShowAllClick
  end
  object BtnSave: TButton
    Left = 456
    Top = 440
    Width = 377
    Height = 81
    Caption = #1057#1054#1061#1056#1040#1053#1048#1058#1068
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 14
    OnClick = BtnSaveClick
  end
  object BtnLoad: TButton
    Left = 856
    Top = 440
    Width = 433
    Height = 81
    Caption = #1047#1040#1043#1056#1059#1047#1048#1058#1068
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI Semibold'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 15
    OnClick = BtnLoadClick
  end
  object Memo1: TMemo
    Left = 8
    Top = 544
    Width = 1281
    Height = 241
    Cursor = crNo
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Lines.Strings = (
      'Memo1')
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 16
    WordWrap = False
    OnClick = BtnLoadClick
  end
end

<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class MyForm
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.MyButton = New System.Windows.Forms.Button()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.txtName = New System.Windows.Forms.TextBox()
        Me.SuspendLayout()
        '
        'MyButton
        '
        Me.MyButton.Location = New System.Drawing.Point(33, 104)
        Me.MyButton.Name = "MyButton"
        Me.MyButton.Size = New System.Drawing.Size(162, 43)
        Me.MyButton.TabIndex = 0
        Me.MyButton.Text = "Click Me"
        Me.MyButton.UseVisualStyleBackColor = True
        Me.MyButton.Visible = False
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(30, 36)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(88, 13)
        Me.Label1.TabIndex = 1
        Me.Label1.Text = "Enter Your Name"
        '
        'txtName
        '
        Me.txtName.Location = New System.Drawing.Point(124, 33)
        Me.txtName.Name = "txtName"
        Me.txtName.Size = New System.Drawing.Size(161, 20)
        Me.txtName.TabIndex = 2
        '
        'MyForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(96.0!, 96.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Dpi
        Me.BackColor = System.Drawing.SystemColors.ActiveCaption
        Me.ClientSize = New System.Drawing.Size(317, 184)
        Me.Controls.Add(Me.txtName)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.MyButton)
        Me.ForeColor = System.Drawing.SystemColors.MenuHighlight
        Me.Name = "MyForm"
        Me.Opacity = 0.8R
        Me.ShowInTaskbar = False
        Me.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen
        Me.Text = "apa"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents MyButton As Button
    Friend WithEvents Label1 As Label
    Friend WithEvents txtName As TextBox
End Class

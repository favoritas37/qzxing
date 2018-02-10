#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ReadQrcode.h"

class ReadQrcode : public QMainWindow
{
	Q_OBJECT

public:
	ReadQrcode(QWidget *parent = Q_NULLPTR);

private slots:
	//ʶ���ά��
	void OnDecodeImage();
	//���
	void OnClear();

private:
	bool IsBarcodeFile(const QString & strFileName);

	QString GetBarcode(const QString& strFileName);

private:
	Ui::ReadQrcodeClass ui;
};

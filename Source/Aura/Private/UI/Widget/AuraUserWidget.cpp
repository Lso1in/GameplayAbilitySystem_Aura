// Lso


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	// ��WidgetController���úõ�ʱ��ֱ�Ӿ���ͨ��WidgetControllerSet()����
	WidgetControllerSet();
}

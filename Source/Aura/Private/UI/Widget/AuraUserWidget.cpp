// Lso


#include "UI/Widget/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	// 当WidgetController设置好的时候，直接就能通过WidgetControllerSet()调用
	WidgetControllerSet();
}

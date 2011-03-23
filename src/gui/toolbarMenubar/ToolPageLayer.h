/*
 * Xournal++
 *
 * Part of the customizable toolbars
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */
// TODO: AA: type check

#ifndef __TOOLPAGELAYER_H__
#define __TOOLPAGELAYER_H__

#include "AbstractToolItem.h"

class ToolPageLayer: public AbstractToolItem {
public:
	ToolPageLayer(ActionHandler * handler, String id, ActionType type);
	virtual ~ToolPageLayer();

public:
	static void cbSelectCallback(GtkComboBox * widget, ToolPageLayer * tpl);

	int getSelectedLayer();
	void setSelectedLayer(int selected);
	void setLayerCount(int layer, int selected);

protected:
	virtual GtkToolItem * newItem();

private:
	GtkWidget * layerComboBox;

	int layerCount;
	bool inCbUpdate;
};

#endif /* __TOOLPAGELAYER_H__ */
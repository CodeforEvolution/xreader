// TODO: Copyright

#ifndef EV_NOTEBOOK_H
#define EV_NOTEBOOK_H

#include <glib.h>


// EvWindow -> EvNotebook -> EvViews...

G_BEGIN_DECLS

typedef struct _EvNotebook EvNotebook;
typedef struct _EvNotebookClass EvNotebookClass;
typedef struct _EvNotebookPrivate EvNotebookPrivate;

#define EV_TYPE_NOTEBOOK              (ev_notebook_get_type())
#define EV_NOTEBOOK(object)           (G_TYPE_CHECK_INSTANCE_CAST((object), EV_TYPE_NOTEBOOK, EvNotebook))
#define EV_NOTEBOOK_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST((klass), EV_TYPE_NOTEBOOK, EvNotebookClass))
#define EV_IS_NOTEBOOK(object)        (G_TYPE_CHECK_INSTANCE_TYPE((object), EV_TYPE_NOTEBOOK))
#define EV_IS_NOTEBOOK_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE((klass), EV_TYPE_NOTEBOOK))
#define EV_NOTEBOOK_GET_CLASS(object) (G_TYPE_INSTANCE_GET_CLASS((object), EV_TYPE_NOTEBOOK, EvNotebookClass))

struct _EvNotebook {
    GtkNotebook         notebook;
    EvNotebookPrivate*  notebook_private;
};

struct _EvNotebookClass {
    GtkNotebookClass     parent_class;
};


GType       ev_notebook_get_type(void) G_GNUC_CONST;
GtkWidget*  ev_notebook_new(void);






G_END_DECLS

#endif /* !EV_NOTEBOOK_H */
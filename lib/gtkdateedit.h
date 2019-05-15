
#ifndef __GTK_DATE_EDIT_H_
#define __GTK_DATE_EDIT_H_ 

#include <time.h>
#include <gtk/gtk.h>

 
G_BEGIN_DECLS


typedef enum {
	GTK_DATE_EDIT_SHOW_TIME             = 1 << 0,
	GTK_DATE_EDIT_24_HR                 = 1 << 1,
	GTK_DATE_EDIT_WEEK_STARTS_ON_MONDAY = 1 << 2,
	GTK_DATE_EDIT_DISPLAY_SECONDS       = 1 << 3
} GtkDateEditFlags;


#define GTK_TYPE_DATE_EDIT            (gtk_date_edit_get_type ())
#define GTK_DATE_EDIT(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_DATE_EDIT, GtkDateEdit))
#define GTK_DATE_EDIT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_DATE_EDIT, GtkDateEditClass))
#define GTK_IS_DATE_EDIT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_DATE_EDIT))
#define GTK_IS_DATE_EDIT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_DATE_EDIT))
#define GTK_DATE_EDIT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_DATE_EDIT, GtkDateEditClass))


typedef struct _GtkDateEdit        GtkDateEdit;
typedef struct _GtkDateEditPrivate GtkDateEditPrivate;
typedef struct _GtkDateEditClass   GtkDateEditClass;

struct _GtkDateEdit {
	GtkHBox hbox;

	/*< private >*/
	GtkDateEditPrivate *_priv;
};

struct _GtkDateEditClass {
	GtkHBoxClass parent_class;

	void (*date_changed) (GtkDateEdit *gde);
	void (*time_changed) (GtkDateEdit *gde);

	/* Padding for possible expansion */
	gpointer padding1;
	gpointer padding2;
};

GType      gtk_date_edit_get_type        (void) G_GNUC_CONST;

GtkWidget *gtk_date_edit_new            (time_t the_time,
					   gboolean show_time,
					   gboolean use_24_format);

void      gtk_date_edit_set_time        (GtkDateEdit *gde, time_t the_time);
time_t    gtk_date_edit_get_time        (GtkDateEdit *gde);

time_t    gtk_date_edit_get_initial_time(GtkDateEdit *gde);

#ifndef GTK_DISABLE_DEPRECATED
time_t    gtk_date_edit_get_date        (GtkDateEdit *gde);
#endif /* GTK_DISABLE_DEPRECATED */

G_END_DECLS

#endif
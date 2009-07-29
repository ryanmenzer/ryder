#import <Cocoa/Cocoa.h>

@interface RyderNameView : NSView
{
	NSString *name;
	NSFont *font;
	NSMutableParagraphStyle *parStyle;
	NSMutableDictionary *fontAttribs;
}

@property(copy) NSString *name;
@property(readonly) NSFont *font;
@property(readonly) NSMutableParagraphStyle *parStyle;
@property(readonly) NSMutableDictionary *fontAttribs;

@end

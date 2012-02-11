#import <Foundation/Foundation.h>
#import <libxml/tree.h>


@interface NSString (DDXML)

/**
 * xmlChar - A basic replacement for char, a byte in a UTF-8 encoded string.
**/
- (const xmlChar *)xmlChar;

- (NSString *)stringByTrimming;

@end


/**
 * Work around a linker bug. 
 * https://developer.apple.com/library/mac/#qa/qa1490/_index.html
 *
 */
@interface DDXML_NSString_FIX_CATEGORY_BUG : NSObject 
@end
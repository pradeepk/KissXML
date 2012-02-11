#import <Foundation/Foundation.h>
#import "DDXML.h"

// These methods are not part of the standard NSXML API.
// But any developer working extensively with XML will likely appreciate them.

@interface DDXMLElement (DDAdditions)

+ (DDXMLElement *)elementWithName:(NSString *)name xmlns:(NSString *)ns;

- (DDXMLElement *)elementForName:(NSString *)name;
- (DDXMLElement *)elementForName:(NSString *)name xmlns:(NSString *)xmlns;

- (NSString *)xmlns;
- (void)setXmlns:(NSString *)ns;

- (NSString *)prettyXMLString;
- (NSString *)compactXMLString;

- (void)addAttributeWithName:(NSString *)name stringValue:(NSString *)string;

- (NSDictionary *)attributesAsDictionary;

@end

/**
 * Work around a linker bug. 
 * https://developer.apple.com/library/mac/#qa/qa1490/_index.html
 *
 */
@interface DDXML_NSXMLElement_FIX_CATEGORY_BUG : NSObject 
@end
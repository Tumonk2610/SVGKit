/**
 
 */
#import "SVGKSource.h"

@interface SVGKSourceLocalFile : SVGKSource <NSCopying>

@property (nonatomic, retain) NSString* filePath;
@property (nonatomic, readonly) BOOL wasRelative;

- (instancetype)initWithFilename:(NSString*)p;
+ (SVGKSourceLocalFile*)sourceFromFilename:(NSString*)p;

@end

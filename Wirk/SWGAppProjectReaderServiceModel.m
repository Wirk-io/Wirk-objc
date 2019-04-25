#import "SWGAppProjectReaderServiceModel.h"

@implementation SWGAppProjectReaderServiceModel

- (instancetype)init {
  self = [super init];

  if (self) {
    // initalise property's default value, if any
    
  }

  return self;
}

/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper
{
  return [[JSONKeyMapper alloc] initWithDictionary:@{ @"AppName": @"appName", @"AppProjectState": @"appProjectState", @"CreationDate": @"creationDate", @"Credit": @"credit", @"IdApp": @"idApp", @"IdAppProject": @"idAppProject", @"IdQuality": @"idQuality", @"Instruction": @"instruction", @"NbTaskClosed": @"nbTaskClosed", @"NbTotalTask": @"nbTotalTask", @"QualityName": @"qualityName", @"QuestionOptions": @"questionOptions", @"Title": @"title", @"UrlNotification": @"urlNotification" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName
{
  NSArray *optionalProperties = @[@"appProjectState", @"creationDate", @"credit", @"idApp", @"idAppProject", @"idQuality", @"instruction", @"nbTaskClosed", @"nbTotalTask", @"qualityName", @"questionOptions", @"title", @"urlNotification"];

  if ([optionalProperties containsObject:propertyName]) {
    return YES;
  }
  else {
    return NO;
  }
}

/**
 * Gets the string presentation of the object.
 * This method will be called when logging model object using `NSLog`.
 */
- (NSString *)description {
    return [[self toDictionary] description];
}

@end

#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "SWGTaskReaderServiceModel.h"


@protocol SWGTaskLineReaderServiceModel
@end

@interface SWGTaskLineReaderServiceModel : SWGObject


@property(nonatomic) NSNumber* idAppProject;

@property(nonatomic) NSNumber* idTaskLine;

@property(nonatomic) NSArray* /* NSString */ inputs;

@property(nonatomic) NSArray<SWGTaskReaderServiceModel>* tasks;

@end
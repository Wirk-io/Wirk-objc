#import <Foundation/Foundation.h>
#import "SWGTaskLineReaderServiceModel.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGTaskLineApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGTaskLineApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGTaskLineApi*) sharedAPI;
///
///
/// 
/// ID
///
/// @param _id ID
/// 
///
/// @return SWGTaskLineReaderServiceModel*
-(NSNumber*) getWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGTaskLineReaderServiceModel* output, NSError* error))completionBlock;
    



@end

//
//  SaxophotoAPIClient.h
//  Saxophoto
//
//  Created by Mattt Thompson on 11/12/17.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import "AFHTTPClient.h"

@interface SaxophotoAPIClient : AFHTTPClient

+ (SaxophotoAPIClient *)sharedClient;

@end

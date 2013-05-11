//
//  Radius.h
//  BackendProject
//
//  Created by Marcos Vilela on 26/03/13.
//  Copyright (c) 2013 Marcos Vilela. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Helper.h"

@interface Radius : NSObject

@property (strong,nonatomic) NSString *code;
@property (strong,nonatomic) NSString *description;



+ (void)retrieverRadiusServed:(void (^)(NSArray *, NSError *))handler;

@end

//
//  MRTViewModel.h
//  MVVMRACTemplate
//
//  Created by jarvis on 2018/9/13.
//  Copyright © 2018年 JarvisWu. All rights reserved.
//

#import <Foundation/Foundation.h>

extern NSString *const MRTDefaultErrorDomain;

extern const NSInteger MRTDefaultErrorCode;

@interface MRTViewModel : NSObject

/// A RACSubject object, which representing all errors occurred in view model.
@property (nonatomic, strong, readonly) RACSubject *errors;
@property (nonatomic, strong, readonly) RACSubject *willDisappearSignal;
@property (nonatomic, strong, readonly) RACSubject *didAppearSignal;

- (void)initialize;

@end

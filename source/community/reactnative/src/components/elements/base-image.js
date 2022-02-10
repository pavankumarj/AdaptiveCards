import React from 'react';
import {Image} from 'react-native';
import {Registry} from '../registration/registry';

export const BaseImage = (props) => {
    const BaseImageExtension = Registry.getManager().getInternalComponentOfType(
        'BaseImage',
    );
    return BaseImageExtension ? (
        <BaseImageExtension {...props} />
    ) : (
        <Image {...props} />
    );
};
